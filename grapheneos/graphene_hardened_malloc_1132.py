"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1132."""

def spec_graphene_hardened_malloc_1132() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1132, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1132():
    s = spec_graphene_hardened_malloc_1132()
    assert s["spec_id"] == 1132
