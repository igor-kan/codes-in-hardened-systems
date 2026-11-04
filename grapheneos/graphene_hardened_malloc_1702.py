"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1702."""

def spec_graphene_hardened_malloc_1702() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1702, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1702():
    s = spec_graphene_hardened_malloc_1702()
    assert s["spec_id"] == 1702
