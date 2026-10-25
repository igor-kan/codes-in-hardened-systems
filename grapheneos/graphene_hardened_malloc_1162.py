"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1162."""

def spec_graphene_hardened_malloc_1162() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1162, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1162():
    s = spec_graphene_hardened_malloc_1162()
    assert s["spec_id"] == 1162
