"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1126."""

def spec_graphene_hardened_malloc_1126() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1126, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1126():
    s = spec_graphene_hardened_malloc_1126()
    assert s["spec_id"] == 1126
